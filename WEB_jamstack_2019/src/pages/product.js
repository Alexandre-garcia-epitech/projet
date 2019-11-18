import React from 'react';

function Product(props) {
    return (
        <div className="product-container">
            <div className="product-image">
                <img
                    src={props.imagePath}
                    alt="not found..."
                    width="800"
                    height="auto"
                />
            </div>
            <div className="product-title">
                {props.ProductTitle}
            </div>
            <div className="product-price">
                {props.ProductPrice}
            </div>
            <div className="product-description">
                {props.ProductDescription}
            </div>
        </div>
    );
}

export default Product;