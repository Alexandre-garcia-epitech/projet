import * as React from "react";
import { Link } from "gatsby";
import { FaHome } from 'react-icons/fa';

interface NavigationMenuProps {
    logoPath: string;
}

interface NavigationMenuState {}

class NavigationMenu extends React.Component<NavigationMenuProps, NavigationMenuState>
{
    public render() {
        let { logoPath } = this.props;

        return (
            <div className="navigationMenu-container">
                <div className="navigationMenu-link">
                    <Link to="/">
                        { logoPath ? (
                            <img src={logoPath} />
                        ) : (
                            <FaHome />
                        )}
                    </Link>
                </div>
                <div className="navigationMenu-link">
                    <Link to="/shop/">Shop</Link>
                </div>
                <div className="navigationMenu-link">
                    <Link to="/contact/">Contact Us</Link>
                </div>
                <div className="navigationMenu-search">
                    <SearchBar />
                </div>
                <div className="navigationMenu-cart">
                    <Link to="/cart/">Cart</Link>
                </div>
            </div>
        )
    }
}

export default NavigationMenu;