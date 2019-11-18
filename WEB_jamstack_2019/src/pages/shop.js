import React from "react";
import { graphql } from "gatsby";
import GenericButton from "../components/GenericButton/index.jsx";

export const query = graphql`
    query {
        allMysqlProducts {
            edges {
                node {
                    name
                    price
                    description
                    imageurl
                }
            }
        }
    }
`

export default ({data}) => {
    console.log(data.allMysqlProducts.edges);
    let csst1 = true;
    return (
        <div className="shop-container">
            {data.allMysqlProducts.edges.map((product, index) => (
                <div
                    key={index}
                    className={csst1 ? 'shop-product-container-t1' : 'shop-product-container-t2'}
                >
                    <div className={csst1 ? 'shop-product-image-t1' : 'shop-product-image-t2'}>
                        <img
                            src={product.node.imageurl}
                            alt="Not found..."
                            width="400"
                            height="auto"
                        />
                    </div>
                    <div className={csst1 ? 'shop-product-name-t1' : 'shop-product-name-t2'}>
                        {product.node.name}
                    </div>
                    <div className={csst1 ? 'shop-product-description-t1' : 'shop-product-description-t2'}>
                        {product.node.description}
                    </div>
                    <div className={csst1 ? 'shop-product-price-buy-t1' : 'shop-product-price-buy-t2'}>
                        {product.node.price}
                        <GenericButton text="text"/>
                    </div>
                </div>
            ))}
        </div>
    );
}

// export default Shop;