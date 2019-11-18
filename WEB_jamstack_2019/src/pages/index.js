import * as React from 'react';
import '../../static/css/home.css';

function Home({data}) {
    let csst1 = true;
    return (
        <div className={csst1 ? 'shop-home-container-t1' : 'shop-home-container-t2'}>
            <div className={csst1 ? 'shop-home-image-t1' : 'shop-home-image-t2'}>
                <img
                    src={data}
                    alt="Not found..."
                    width="400"
                    height="auto"
                />
            </div>
            <div className={csst1 ? 'shop-home-name-t1' : 'shop-home-name-t2'}>
                {data}
            </div>
            <div className={csst1 ? 'shop-home-description-t1' : 'shop-home-description-t2'}>
                {data}
            </div>
        </div>                
    );
}

export default Home;
