import * as React from 'react';
import NavigationMenu from '../NavigationMenu';

interface HeaderProps {

}

interface HeaderState {}

class Header extends React.Component<HeaderProps, HeaderState> {
    public render() {
        return (
            <div className="header-container">
                <NavigationMenu logoPath=""/>
            </div>
        )
    }
}

export default Header;